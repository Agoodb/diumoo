//
//  DMAppDelegate.h
//  diumoo
//
//  Created by Shanzi on 12-6-7.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "DMControlCenter.h"
#import "DMDoubanAuthHelper.h"
#import "DMPanelWindowController.h"
#import "PLTabPreferenceControl.h"
#import "DMShortcutsHandler.h"

@interface DMAppDelegate : NSObject<NSApplicationDelegate>
{
    DMControlCenter *center;
}

-(IBAction)showPreference:(id)sender;
-(IBAction)importOrExport:(id)sender;
-(IBAction)showHelp:(id)sender;
-(void)keyShortcuts:(id) key;

@end
