/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MSPContainerObserver.h>
#import <libobjc.A.dylib/MSPQuerySourceObserver.h>

@class MSPContainer, NSHashTable, _MSPQueryState, NSString;

@interface MSPQuerySource : NSObject <MSPContainerObserver, MSPQuerySourceObserver> {

	MSPContainer* _owningContainer;
	MSPQuerySource* _parentSource;
	/*^block*/id _mappingBlock;
	/*^block*/id _preprocessingBlock;
	NSHashTable* _observers;
	_MSPQueryState* _state;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_container;
-(void)_removeObserver:(id)arg1 ;
-(void)_addObserver:(id)arg1 ;
-(void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5 ;
-(void)_didReceiveContainerContents:(id)arg1 context:(id)arg2 ;
-(void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3 ;
-(id)_initWithParentSource:(id)arg1 preprocessingBlock:(/*^block*/id)arg2 mappingBlock:(/*^block*/id)arg3 ;
-(id)_initWithOwningContainer:(id)arg1 ;
-(id)sourceByMappingContentsUsingBlock:(/*^block*/id)arg1 ;
-(id)sourceByMappingContentsUsingPreprocessingBlock:(/*^block*/id)arg1 mappingBlock:(/*^block*/id)arg2 ;
-(id)newQuery;
-(id)newEditableQuery;
@end
