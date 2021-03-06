/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSupport/MSPQuery.h>

@class _MSPQueryState, MSPContainer, NSString;

@interface MSPEditableQuery : MSPQuery {

	_MSPQueryState* _editedState;
	MSPContainer* _container;
	NSString* _context;

}
-(id)_initWithSource:(id)arg1 ;
-(void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3 ;
-(id)_visibleState;
-(void)_performEditWithStateTransformation:(/*^block*/id)arg1 containerEdit:(/*^block*/id)arg2 ;
-(void)deleteContentsObjectAtIndexes:(id)arg1 ;
-(void)deleteContentsObjectAtIndex:(unsigned long long)arg1 ;
-(void)moveContentsObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
@end

