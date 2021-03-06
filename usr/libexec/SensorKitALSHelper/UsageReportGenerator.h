//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RDLaunchEventsDelegate-Protocol.h"
#import "SRSensorWriterDelegate-Protocol.h"

@class NSDate, NSMutableDictionary, NSMutableSet, NSString, RDLaunchEvents, SRSensorWriter;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying;

@interface UsageReportGenerator : NSObject <SRSensorWriterDelegate, RDLaunchEventsDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    RDLaunchEvents *_usageReportLaunchEvents;	// 16 = 0x10
    RDLaunchEvents *_interactionHistoryLaunchEvents;	// 24 = 0x18
    id <_DKKnowledgeQuerying> _knowledgeStore;	// 32 = 0x20
    SRSensorWriter *_deviceUsageReportWriter;	// 40 = 0x28
    NSMutableSet *_eventsPendingCategories;	// 48 = 0x30
    NSMutableDictionary *_notificationBundleIdsByNotificationId;	// 56 = 0x38
    SRSensorWriter *_messagesUsageReportWriter;	// 64 = 0x40
    SRSensorWriter *_phoneUsageReportWriter;	// 72 = 0x48
    NSMutableDictionary *_deviceUsageReports;	// 80 = 0x50
    NSMutableDictionary *_messagesUsageReports;	// 88 = 0x58
    NSMutableDictionary *_phoneUsageReports;	// 96 = 0x60
}

+ (void)initialize;	// IMP=0x0000000100007120
@property(retain) NSMutableDictionary *phoneUsageReports; // @synthesize phoneUsageReports=_phoneUsageReports;
@property(retain) NSMutableDictionary *messagesUsageReports; // @synthesize messagesUsageReports=_messagesUsageReports;
@property(retain) NSMutableDictionary *deviceUsageReports; // @synthesize deviceUsageReports=_deviceUsageReports;
@property(retain) SRSensorWriter *phoneUsageReportWriter; // @synthesize phoneUsageReportWriter=_phoneUsageReportWriter;
@property(retain) SRSensorWriter *messagesUsageReportWriter; // @synthesize messagesUsageReportWriter=_messagesUsageReportWriter;
@property(retain) NSMutableDictionary *notificationBundleIdsByNotificationId; // @synthesize notificationBundleIdsByNotificationId=_notificationBundleIdsByNotificationId;
@property(retain) NSMutableSet *eventsPendingCategories; // @synthesize eventsPendingCategories=_eventsPendingCategories;
@property(retain) SRSensorWriter *deviceUsageReportWriter; // @synthesize deviceUsageReportWriter=_deviceUsageReportWriter;
@property(retain) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property(retain) RDLaunchEvents *interactionHistoryLaunchEvents; // @synthesize interactionHistoryLaunchEvents=_interactionHistoryLaunchEvents;
@property(retain) RDLaunchEvents *usageReportLaunchEvents; // @synthesize usageReportLaunchEvents=_usageReportLaunchEvents;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (Class)classForSensorIdentifier:(id)arg1;	// IMP=0x000000010000a4f0
- (void)sensorWriterDidStopMonitoring:(id)arg1;	// IMP=0x000000010000a480
- (void)sensorWriterWillStartMonitoring:(id)arg1;	// IMP=0x000000010000a45c
- (void)launchEventRunActivity:(id)arg1;	// IMP=0x000000010000a3ac
- (void)runInteractionHistoryCollectionActivity:(id)arg1;	// IMP=0x0000000100009ea4
- (void)runUsageCollectionActivity:(id)arg1;	// IMP=0x0000000100009a38
- (id)appCategoryFromBundleId:(id)arg1;	// IMP=0x0000000100009938
- (_Bool)isAppleBundle:(id)arg1;	// IMP=0x00000001000098ec
- (void)queryInteractionHistoryDuringInterval:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008f2c
- (void)queryUsageDuringInterval:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000082d4
- (void)requestCategoriesForInterval:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007960
- (id)phoneUsageReportForDate:(id)arg1;	// IMP=0x00000001000078c4
- (id)messagesUsageReportForDate:(id)arg1;	// IMP=0x0000000100007828
- (id)deviceUsageReportForDate:(id)arg1;	// IMP=0x000000010000778c
@property(retain) NSDate *lastInteractionHistoryQueryDate;
@property(retain) NSDate *lastUsageQueryDate;
- (void)dealloc;	// IMP=0x0000000100007520
- (id)initWithUsageReportLaunchEvents:(id)arg1 interactionHistoryLaunchEvents:(id)arg2 knowledgeStore:(id)arg3 usageReportWriter:(id)arg4 messagesUsageReportWriter:(id)arg5 phoneUsageReportWriter:(id)arg6 queue:(id)arg7;	// IMP=0x00000001000073c4
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010000716c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

