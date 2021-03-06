/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EKEventViewDelegatePrivate.h>

@protocol EKICSPreviewControllerDelegate;
@class EKICSPreviewModel, EKEventStore, EKEventViewController, UIViewController, EKEvent, NSString;

@interface EKICSPreviewController : NSObject <EKEventViewDelegatePrivate> {

	EKICSPreviewModel* _model;
	EKEventStore* _eventStore;
	EKEventViewController* _currentImport;
	UIViewController* _contentViewController;
	BOOL _importing;
	BOOL _hasCustomCancelButton;
	long long _cancelButtonType;
	EKEvent* _eventFromUID;
	BOOL _allowsImport;
	BOOL _allowsEditing;
	BOOL _allowsSubitems;
	BOOL _allowsInvalidProperties;
	BOOL _allowsToDos;
	int _eventUID;
	id<EKICSPreviewControllerDelegate> _previewDelegate;
	unsigned long long _actionsState;

}

@property (assign,nonatomic,__weak) id<EKICSPreviewControllerDelegate> previewDelegate;              //@synthesize previewDelegate=_previewDelegate - In the implementation block
@property (assign,nonatomic) BOOL allowsImport;                                                      //@synthesize allowsImport=_allowsImport - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                     //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsSubitems;                                                    //@synthesize allowsSubitems=_allowsSubitems - In the implementation block
@property (assign,nonatomic) unsigned long long actionsState;                                        //@synthesize actionsState=_actionsState - In the implementation block
@property (assign,nonatomic) BOOL allowsInvalidProperties;                                           //@synthesize allowsInvalidProperties=_allowsInvalidProperties - In the implementation block
@property (assign,nonatomic) BOOL allowsToDos;                                                       //@synthesize allowsToDos=_allowsToDos - In the implementation block
@property (nonatomic,readonly) BOOL isImporting; 
@property (nonatomic,readonly) int eventUID;                                                         //@synthesize eventUID=_eventUID - In the implementation block
@property (nonatomic,readonly) unsigned long long totalEventCount; 
@property (nonatomic,readonly) unsigned long long unimportedEventCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)viewController;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(unsigned long long)actionsState;
-(unsigned long long)totalEventCount;
-(void)setAllowsSubitems:(BOOL)arg1 ;
-(unsigned long long)unimportedEventCount;
-(void)icsPreviewListControllerDidRequestImportAll:(id)arg1 ;
-(void)icsPreviewListController:(id)arg1 didSelectEvent:(id)arg2 ;
-(BOOL)allowsImport;
-(void)setAllowsImport:(BOOL)arg1 ;
-(BOOL)allowsSubitems;
-(void)importAllIntoCalendar:(id)arg1 ;
-(void)calendarChooserDidFinish:(id)arg1 ;
-(void)calendarChooserDidCancel:(id)arg1 ;
-(id)initWithURL:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithData:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3 ;
-(void)_databaseChanged:(id)arg1 ;
-(BOOL)_anyCalendarsSupportingImport;
-(id)detailViewForEvent:(id)arg1 eventInRealStore:(BOOL)arg2 isUpdate:(BOOL)arg3 ;
-(void)_createCancelButtonWithType:(long long)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)importAllRequested:(id)arg1 ;
-(id)_defaultCalendarForImport;
-(BOOL)_calendarSupportsImport:(id)arg1 ;
-(void)_enumerateSupportedCalendarsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)_countOfCalendarsSupportingImport;
-(BOOL)_shouldShowCalendarChooser;
-(void)presentCalendarChooserForController:(id)arg1 ;
-(void)importEventFromController:(id)arg1 intoCalendar:(id)arg2 ;
-(void)_updateCancelButton;
-(void)handleDidImportEvent:(id)arg1 fromController:(id)arg2 intoCalendar:(id)arg3 ;
-(void)handleImportEventError;
-(id<EKICSPreviewControllerDelegate>)previewDelegate;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)eventViewControllerDidRequestAddToCalendar:(id)arg1 ;
-(BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)arg1 ;
-(BOOL)eventViewControllerShouldDismissSelf:(id)arg1 ;
-(id)initWithURL:(id)arg1 eventStore:(id)arg2 ;
-(id)initWithData:(id)arg1 eventStore:(id)arg2 ;
-(id)initWithEventUID:(int)arg1 eventStore:(id)arg2 ;
-(BOOL)isImporting;
-(id)singleExistingEventUniqueID;
-(id)popoverContentController;
-(void)setCancelButtonWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeCancelButton;
-(void)setPreviewDelegate:(id<EKICSPreviewControllerDelegate>)arg1 ;
-(void)setActionsState:(unsigned long long)arg1 ;
-(BOOL)allowsInvalidProperties;
-(void)setAllowsInvalidProperties:(BOOL)arg1 ;
-(BOOL)allowsToDos;
-(void)setAllowsToDos:(BOOL)arg1 ;
-(int)eventUID;
@end

