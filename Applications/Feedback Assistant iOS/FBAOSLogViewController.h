//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBAOSLogViewerDataSource, NSString, NSURL, UIActivityIndicatorView;

@interface FBAOSLogViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _previousToolbarHidden;	// 8 = 0x8
    _Bool _loading;	// 9 = 0x9
    NSURL *_logURL;	// 16 = 0x10
    FBAOSLogViewerDataSource *_logSource;	// 24 = 0x18
    UIActivityIndicatorView *_spinner;	// 32 = 0x20
}

+ (_Bool)canDisplayURL:(id)arg1;	// IMP=0x00000001000c2608
- (void).cxx_destruct;	// IMP=0x00000001000c35a8
@property __weak UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(readonly, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property _Bool previousToolbarHidden; // @synthesize previousToolbarHidden=_previousToolbarHidden;
@property(retain) FBAOSLogViewerDataSource *logSource; // @synthesize logSource=_logSource;
@property(retain) NSURL *logURL; // @synthesize logURL=_logURL;
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001000c33b0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000c3194
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000c30fc
- (void)setLoading:(_Bool)arg1;	// IMP=0x00000001000c3098
- (void)nextPage;	// IMP=0x00000001000c3040
- (void)shareArchive:(id)arg1;	// IMP=0x00000001000c2d94
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000c2d04
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000c2c40
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000c2bb8
- (void)viewDidLoad;	// IMP=0x00000001000c2970
- (void)setOSLogURL:(id)arg1;	// IMP=0x00000001000c2688

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

