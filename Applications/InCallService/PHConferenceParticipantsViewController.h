//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PHConferenceParticipantCellProtocol-Protocol.h"
#import "UINavigationBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView;

@interface PHConferenceParticipantsViewController : UIViewController <UINavigationBarDelegate, UITableViewDataSource, UITableViewDelegate, PHConferenceParticipantCellProtocol>
{
    _Bool _showingMultiwayParticipants;	// 8 = 0x8
    NSMutableArray *_conferenceParticipantCalls;	// 16 = 0x10
    NSMutableArray *_remoteParticipantHandles;	// 24 = 0x18
    UITableView *_conferenceTable;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000818e8
@property(nonatomic, getter=isShowingMultiwayParticipants) _Bool showingMultiwayParticipants; // @synthesize showingMultiwayParticipants=_showingMultiwayParticipants;
@property(retain) UITableView *conferenceTable; // @synthesize conferenceTable=_conferenceTable;
@property(retain) NSMutableArray *remoteParticipantHandles; // @synthesize remoteParticipantHandles=_remoteParticipantHandles;
@property(retain) NSMutableArray *conferenceParticipantCalls; // @synthesize conferenceParticipantCalls=_conferenceParticipantCalls;
- (void)dismissAfterPrivate;	// IMP=0x0000000100081804
- (void)conferenceParticipantCellRequestedTakeCallPrivate:(id)arg1;	// IMP=0x00000001000815c8
- (void)conferenceParticipantCellRequestedEndCall:(id)arg1;	// IMP=0x0000000100081424
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100081418
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0000000100081410
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001000813ac
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010008109c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100081028
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000100081020
- (void)removeCall:(id)arg1;	// IMP=0x0000000100080dbc
- (void)handleCallModelChangedNotification:(id)arg1;	// IMP=0x0000000100080b90
- (void)callStatusChanged:(id)arg1;	// IMP=0x00000001000809d4
- (void)dismissConferenceView;	// IMP=0x0000000100080988
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000807b0
- (void)loadView;	// IMP=0x000000010008035c
- (void)dealloc;	// IMP=0x00000001000802e4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100080190

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
