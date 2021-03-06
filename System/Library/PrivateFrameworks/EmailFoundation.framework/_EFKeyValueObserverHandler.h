/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EFCancelable.h>

@class NSString;

@interface _EFKeyValueObserverHandler : NSObject <EFCancelable> {

	id _object;
	NSString* _keyPath;
	/*^block*/id _block;
	BOOL _observing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cancel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)startObservingWithOptions:(unsigned long long)arg1 ;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

