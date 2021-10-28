//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

#import "UIActivityItemSource-Protocol.h"
#import "UIActivityItemSourceAttachment-Protocol.h"
#import "UIActivityItemSubjectSource-Protocol.h"

@class NSString, SSSScreenshot;

@interface SSSScreenshotItemProvider : UIActivityItemProvider <UIActivityItemSource, UIActivityItemSubjectSource, UIActivityItemSourceAttachment>
{
    SSSScreenshot *_screenshot;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100031938
@property(nonatomic) __weak SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;	// IMP=0x0000000100031874
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;	// IMP=0x00000001000317e4
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;	// IMP=0x00000001000317d8
- (id)activityViewControllerPlaceholderItem:(id)arg1;	// IMP=0x0000000100031778
- (id)item;	// IMP=0x000000010003172c
- (id)placeholderItemForScreenshot:(id)arg1;	// IMP=0x00000001000316e4
- (id)initWithScreenshot:(id)arg1;	// IMP=0x0000000100031640

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
