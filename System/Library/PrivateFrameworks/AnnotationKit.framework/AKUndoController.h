/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUndoManager, AKController, NSMutableSet, NSString, NSMapTable;

@interface AKUndoController : NSObject {

	BOOL _externalSourceTrackingChanged;
	BOOL _undoGroupHasChangesToMultipleProperties;
	NSUndoManager* _undoManager;
	AKController* _controller;
	NSMutableSet* _observedPageModelControllers;
	NSMutableSet* _observedAnnotations;
	NSString* _undoGroupPresentablePropertyName;
	NSMapTable* _undoGroupOldPropertiesPerAnnotation;

}

@property (__weak) AKController * controller;                                     //@synthesize controller=_controller - In the implementation block
@property (retain) NSUndoManager * undoManager;                                   //@synthesize undoManager=_undoManager - In the implementation block
@property (retain) NSMutableSet * observedPageModelControllers;                   //@synthesize observedPageModelControllers=_observedPageModelControllers - In the implementation block
@property (retain) NSMutableSet * observedAnnotations;                            //@synthesize observedAnnotations=_observedAnnotations - In the implementation block
@property (retain) NSString * undoGroupPresentablePropertyName;                   //@synthesize undoGroupPresentablePropertyName=_undoGroupPresentablePropertyName - In the implementation block
@property (assign) BOOL undoGroupHasChangesToMultipleProperties;                  //@synthesize undoGroupHasChangesToMultipleProperties=_undoGroupHasChangesToMultipleProperties - In the implementation block
@property (retain) NSMapTable * undoGroupOldPropertiesPerAnnotation;              //@synthesize undoGroupOldPropertiesPerAnnotation=_undoGroupOldPropertiesPerAnnotation - In the implementation block
@property (assign) BOOL externalSourceTrackingChanged;                            //@synthesize externalSourceTrackingChanged=_externalSourceTrackingChanged - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(NSUndoManager *)undoManager;
-(id)initWithController:(id)arg1 ;
-(void)setObservedPageModelControllers:(NSMutableSet *)arg1 ;
-(void)setObservedAnnotations:(NSMutableSet *)arg1 ;
-(void)setUndoGroupPresentablePropertyName:(NSString *)arg1 ;
-(void)setUndoGroupHasChangesToMultipleProperties:(BOOL)arg1 ;
-(void)setUndoGroupOldPropertiesPerAnnotation:(NSMapTable *)arg1 ;
-(void)observeUndoManagerCheckpoint:(id)arg1 ;
-(void)observeUndoManagerDetectedEdit:(id)arg1 ;
-(void)observePageControllerRequestsDisableRegistration:(id)arg1 ;
-(void)observePageControllerRequestsEnableRegistration:(id)arg1 ;
-(NSMutableSet *)observedAnnotations;
-(NSMutableSet *)observedPageModelControllers;
-(void)_startObservingAnnotations:(id)arg1 ;
-(void)_stopObservingAnnotations:(id)arg1 ;
-(NSMapTable *)undoGroupOldPropertiesPerAnnotation;
-(void)_registerUndoForSelectionOnPageModelController:(id)arg1 ;
-(void)_setAnnotationProperties:(id)arg1 ;
-(NSString *)undoGroupPresentablePropertyName;
-(BOOL)undoGroupHasChangesToMultipleProperties;
-(void)_annotationsWillBeRemoved:(id)arg1 onPageController:(id)arg2 ;
-(void)_annotationsWereAdded:(id)arg1 onPageController:(id)arg2 ;
-(BOOL)externalSourceTrackingChanged;
-(void)_deleteAnnotationsFromModel:(id)arg1 ;
-(void)_endEditingOfTextIfAnnotationsDeleted:(id)arg1 ;
-(void)_addAnnotationsFromModel:(id)arg1 ;
-(void)_undoActionForSelectionState:(id)arg1 ;
-(void)startObservingPageModelController:(id)arg1 ;
-(void)stopObservingPageModelController:(id)arg1 ;
-(void)setExternalSourceTrackingChanged:(BOOL)arg1 ;
@end

