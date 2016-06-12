//
//  DMPrefsPanelDataProvider.h
//  diumoo
//
//  Created by Shanzi on 12-6-16.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import "DMShortcutsHandler.h"
#import "MASShortcutView.h"
#import "PLTabPreferenceControl.h"
#import <Foundation/Foundation.h>

#define PANEL_VIEW_COUNT 6

#define GENERAL_PANEL_ID 0
#define ACCOUNT_PANEL_ID 1
#define KEYBINDINGS_PANNEL_ID 2
#define DMLINK_PANEL_ID 3
#define SPACE_PANEL_ID 4
#define INFO_PANEL_ID 5

@interface DMPrefsPanelDataProvider : NSObject <PLTabPreferenceDelegate> {
    // tab controller ( file owner )
    IBOutlet PLTabPreferenceControl* tabcontroller;

    //-----------view outlet -----------
    IBOutlet NSView* general;
    IBOutlet NSView* login;
    IBOutlet NSView* account;
    IBOutlet NSView* keybindings;
    IBOutlet NSView* info;
    IBOutlet NSView* diumoohelper;
    //----------------------------------

    //------- General view outlet ------
    IBOutlet NSButton* forceGrowl;
    IBOutlet NSPopUpButton* muiscQuality;

    //------- login view outlet --------
    IBOutlet NSProgressIndicator* indicator;
    IBOutlet NSProgressIndicator* loginIndicator;
    IBOutlet NSButton* captchaButton;
    IBOutlet NSButton* submitButton;
    IBOutlet NSButton* resetButton;
    IBOutlet NSTextField* email;
    IBOutlet NSSecureTextField* password;
    IBOutlet NSTextField* captcha;
    IBOutlet NSTextField* errorLabel;
    //----------------------------------

    //------ account view outlet -------
    IBOutlet NSButton* userIconButton;
    IBOutlet NSTextField* usernameTextField;
    IBOutlet NSSegmentedControl* playrecordButton;
    //----------------------------------

    //------ key bindings outlet -------
    IBOutlet MASShortcutView* playShortcut;
    IBOutlet MASShortcutView* skipShortcut;
    IBOutlet MASShortcutView* rateShortcut;
    IBOutlet MASShortcutView* banShortcut;
    IBOutlet MASShortcutView* togglePanelShortcut;
    IBOutlet MASShortcutView* showPrefsPanel;

    //------ DiumooLink outlet ---------
    IBOutlet NSTextField* diumooLinkTitle;
    IBOutlet NSTextField* diumooLinkDescription;
    IBOutlet NSButton* installSafriPligin;
    IBOutlet NSButton* installFirefoxPlugin;
    IBOutlet NSButton* installChromePlugin;
    IBOutlet NSButton* viewDetails;

    //------ info outlet ---------------
    IBOutlet NSTextField* displayName;
    IBOutlet NSTextField* version;
    IBOutlet NSTextField* developer;
}

@property (copy) NSString* captcha_code;

- (IBAction)loginAction:(id)sender;
- (IBAction)logoutAction:(id)sender;
- (IBAction)showPlayRecord:(id)sender;
- (IBAction)installBrowserPlugins:(id)sender;
- (IBAction)donation:(id)sender;

@end
