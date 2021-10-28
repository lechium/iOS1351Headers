//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MPVoicemailTableViewController.h"

#import "PHVoicemailListProtocol-Protocol.h"

@class NSString;

@interface PHVoicemailBlockedListViewController : MPVoicemailTableViewController <PHVoicemailListProtocol>
{
}

+ (CDUnknownBlockType)voicemailPredicate;	// IMP=0x0000000100046938
- (void)deleteAllTapped:(id)arg1;	// IMP=0x0000000100046c24
- (void)willShowVoicemails:(id)arg1;	// IMP=0x0000000100046b98
- (id)cellDetailDestructiveActionText;	// IMP=0x0000000100046b1c
- (void)performTableViewDestructiveActionAtIndexPath:(id)arg1;	// IMP=0x00000001000469c0
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000469b4
@property(readonly, copy, nonatomic) NSString *folderName;
@property(readonly, copy, nonatomic) NSString *messageCountText;
- (id)navigationBarText;	// IMP=0x0000000100046764
@property(readonly, nonatomic) _Bool hasContentToDisplay;
- (void)viewDidLoad;	// IMP=0x0000000100046560

@end
