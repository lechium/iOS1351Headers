/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface CLIndoorTileEvictionPolicy : NSObject <NSSecureCoding> {

	BOOL _forceClean;
	double _maxModifiedAge;
	NSObject*<OS_xpc_object> _activity;

}

@property (assign,nonatomic) double maxModifiedAge;                          //@synthesize maxModifiedAge=_maxModifiedAge - In the implementation block
@property (assign,nonatomic) BOOL forceClean;                                //@synthesize forceClean=_forceClean - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)tileLastModified:(double)arg1 needsEvictionAt:(double)arg2 ;
-(double)maxModifiedAge;
-(void)setMaxModifiedAge:(double)arg1 ;
-(BOOL)forceClean;
-(void)setForceClean:(BOOL)arg1 ;
@end

