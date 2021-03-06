//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NanoNewsSettingsManager : NSObject
{
}

+ (void)resetSaved;	// IMP=0x0000000100009c00
+ (void)resetSeen;	// IMP=0x0000000100009bb8
+ (void)setSavedIdentifiers:(id)arg1;	// IMP=0x0000000100009860
+ (void)markAnalyticsEventsRecorded:(id)arg1;	// IMP=0x0000000100009500
+ (void)synchronizeAnalyticsEvents;	// IMP=0x0000000100009474
+ (id)_recordedAnalyticsEventUUIDsByTrimmingEvents:(id)arg1;	// IMP=0x0000000100009180
+ (id)recordedAnalyticsEventUUIDs;	// IMP=0x00000001000090e0
+ (id)analyticsEvents;	// IMP=0x0000000100008da0
+ (void)setPreferredRefreshDates:(id)arg1;	// IMP=0x0000000100008cb0
+ (id)preferredRefreshDates;	// IMP=0x0000000100008860
+ (_Bool)_validDateArray:(id)arg1;	// IMP=0x0000000100008728
+ (void)removeSeenIdentifier:(id)arg1;	// IMP=0x00000001000086b8
+ (void)removeSavedIdentifier:(id)arg1;	// IMP=0x0000000100008638
+ (void)addSavedIdentifier:(id)arg1;	// IMP=0x00000001000085b8
+ (void)addSeenIdentifier:(id)arg1;	// IMP=0x0000000100008548
+ (id)gizmoSavedHeadlineIdentifiers;	// IMP=0x00000001000084ec
+ (id)articleIdentifiersOnGizmo;	// IMP=0x0000000100008444
+ (id)savedHeadlineIdentifiers;	// IMP=0x00000001000083e8
+ (id)seenHeadlineIdentifiers;	// IMP=0x000000010000838c
+ (void)synchronizeSeenHeadlineIdentifiers;	// IMP=0x0000000100008344

@end

