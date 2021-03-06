//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebUI/WBUHistory.h>

#import "WKHistoryDelegatePrivate-Protocol.h"

@class NSCalendar, NSMutableArray, NSString, _WKVisitedLinkStore;

@interface History : WBUHistory <WKHistoryDelegatePrivate>
{
    NSMutableArray *_deferredUpdates;	// 56 = 0x38
    NSCalendar *_calendar;	// 64 = 0x40
    struct __CFDateFormatter *_weekdayMonthDateFormatter;	// 72 = 0x48
    _WKVisitedLinkStore *_visitedLinkStore;	// 80 = 0x50
}

+ (id)sharedHistory;	// IMP=0x0000000100006cc0
+ (id)_localizedStringForWeekday:(long long)arg1 partOfDay:(long long)arg2;	// IMP=0x00000001000813a4
+ (id)_localizedStringForTodayWithPartOfDay:(long long)arg1;	// IMP=0x0000000100081338
+ (struct _NSRange)hourRangeFromPartOfDay:(long long)arg1;	// IMP=0x0000000100081308
+ (long long)partOfDayFromHourOfDay:(long long)arg1;	// IMP=0x00000001000812ec
+ (id)dayWithPeriodOfDayStringForDate:(id)arg1;	// IMP=0x00000001000811a0
- (void).cxx_destruct;	// IMP=0x0000000100083b14
- (void)_webView:(id)arg1 didUpdateHistoryTitle:(id)arg2 forURL:(id)arg3;	// IMP=0x00000001000838b4
- (void)_webView:(id)arg1 didPerformServerRedirectFromURL:(id)arg2 toURL:(id)arg3;	// IMP=0x00000001000835c4
- (void)_webView:(id)arg1 didPerformClientRedirectFromURL:(id)arg2 toURL:(id)arg3;	// IMP=0x000000010008325c
- (void)_webView:(id)arg1 didNavigateWithNavigationData:(id)arg2;	// IMP=0x0000000100082a60
- (void)_addVisitedLinksForItemsIfNeeded:(id)arg1;	// IMP=0x0000000100082874
- (void)_removeAllVisitedLinks;	// IMP=0x000000010008285c
- (void)_updateForWKWebView:(id)arg1 browserController:(id)arg2 updates:(CDUnknownBlockType)arg3;	// IMP=0x000000010008272c
@property(readonly, nonatomic) _WKVisitedLinkStore *visitedLinkStore;
- (_Bool)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;	// IMP=0x000000010008223c
- (Class)_historyItemClass;	// IMP=0x0000000100082230
- (void)removeItem:(id)arg1;	// IMP=0x0000000100082154
- (void)cancelDeferredUpdates;	// IMP=0x000000010008213c
- (void)commitDeferredUpdates;	// IMP=0x0000000100081ff8
- (id)_weekdayMonthDateStringForDate:(id)arg1;	// IMP=0x0000000100081fc0
- (id)titleForItem:(id)arg1;	// IMP=0x0000000100081c40
- (void)localeChanged:(struct __CFLocale *)arg1;	// IMP=0x0000000100081be0
- (struct __CFDateFormatter *)newDateFormatterForLocale:(struct __CFLocale *)arg1 formatType:(id)arg2;	// IMP=0x0000000100081b08
- (void)dealloc;	// IMP=0x0000000100081a4c
- (id)init;	// IMP=0x0000000100006d00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

