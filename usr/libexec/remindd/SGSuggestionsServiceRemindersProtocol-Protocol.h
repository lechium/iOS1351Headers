//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_SGSuggestionsServiceBaseProtocol-Protocol.h"
#import "_SGSuggestionsServiceFoundInAppsProtocol-Protocol.h"

@class NSString, SGRecordId, SGReminder;

@protocol SGSuggestionsServiceRemindersProtocol <_SGSuggestionsServiceBaseProtocol, _SGSuggestionsServiceFoundInAppsProtocol>
- (void)reminderTitleForContent:(NSString *)arg1 withCompletion:(void (^)(NSString *, NSError *))arg2;
- (void)allRemindersLimitedTo:(long long)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)reminderAlarmTriggeredForRecordId:(SGRecordId *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)rejectRealtimeReminder:(SGReminder *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)rejectReminderByRecordId:(SGRecordId *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)confirmRealtimeReminder:(SGReminder *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)confirmReminderByRecordId:(SGRecordId *)arg1 withCompletion:(void (^)(NSError *))arg2;
@end

