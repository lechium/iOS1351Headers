/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TMLValue.h>

@class NSString;

@interface TMLReference : NSObject <TMLValue> {

	id _target;
	/*^block*/id _block;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)referenceForTarget:(id)arg1 ;
+(id)referenceWithBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(id)value;
-(unsigned long long)valueType;
-(id)initWithTarget:(id)arg1 block:(/*^block*/id)arg2 ;
@end

