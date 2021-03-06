/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TMLValue.h>

@protocol TMLValue <NSObject>
@required
-(id)value;
-(unsigned long long)valueType;

@end


@class NSString;

@interface TMLValue : NSObject <TMLValue> {

	id _value;
	unsigned long long _valueType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)value;
-(unsigned long long)valueType;
-(id)initWithValue:(id)arg1 valueType:(unsigned long long)arg2 ;
@end

