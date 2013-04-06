//
//  DMPlayableItem.h
//  diumoo-core
//
//  Created by Anakin Zheng on 13-1-16.
//  retainright (c) 2013年 diumoo.net. All rights reserved.
//

#define DOUBAN_URL_PRIFIX @"http://music.douban.com"
#define TIMER_INTERVAL 0.1

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

typedef enum{
    WAIT_TO_PLAY = 0,
    PLAYING,
    PLAYING_AND_WILL_REPLAY,
    REPLAYING,
    REPLAYED
}ItemPlayState;

@class DMPlayableItem;
@protocol DMPlayableItemDelegate <NSObject>

-(void) playableItem:(DMPlayableItem *)item loadStateChanged:(long)state;

@end

@interface DMPlayableItem : AVPlayerItem
{
    NSDictionary *musicInfo;
    NSString *skipType;
    NSImage *cover;
    
    float duration;
    BOOL like;
}

@property BOOL like;

@property (readonly) float duration;
@property (readonly) NSDictionary *musicInfo;
@property (strong) NSImage *cover;
@property ItemPlayState playState;
@property id<DMPlayableItemDelegate> delegate;

+(id) playableItemWithDictionary:(NSDictionary*) aDict;
-(id) initWithDictionary:(NSDictionary*) aDict;

-(void) invalidateItem;

-(void) prepareCoverWithCallbackBlock: (void (^)(NSImage*))block;

-(NSString*) shareAttributeWithChannel:(NSString*)channel;

@end


