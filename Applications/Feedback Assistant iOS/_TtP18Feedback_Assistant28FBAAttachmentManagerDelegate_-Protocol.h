//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FBAAttachment, NSArray, _TtC18Feedback_Assistant20FBAAttachmentManager;

@protocol _TtP18Feedback_Assistant28FBAAttachmentManagerDelegate_
- (void)attachmentManager:(_TtC18Feedback_Assistant20FBAAttachmentManager *)arg1 didStartBugSessionsWithDevices:(NSArray *)arg2 failedDevices:(NSArray *)arg3;
- (void)attachmentManager:(_TtC18Feedback_Assistant20FBAAttachmentManager *)arg1 didUpdateAttachment:(FBAAttachment *)arg2 atIndex:(long long)arg3;
- (void)attachmentManager:(_TtC18Feedback_Assistant20FBAAttachmentManager *)arg1 didAddAttachment:(FBAAttachment *)arg2 atIndex:(long long)arg3;
- (void)attachmentManager:(_TtC18Feedback_Assistant20FBAAttachmentManager *)arg1 didRemoveAttachment:(FBAAttachment *)arg2 atIndex:(long long)arg3;
@end
