/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentTypeDescribing.h>
@class NSString;


@protocol SXComponentTypeDescribing <NSObject>
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
@required
-(NSString *)type;
-(int)role;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SXComponentTypeDescribing : NSObject <SXComponentTypeDescribing, NSCopying> {

	int _role;
	NSString* _type;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int role;                            //@synthesize role=_role - In the implementation block
+(id)descriptionWithType:(id)arg1 role:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(int)role;
@end
