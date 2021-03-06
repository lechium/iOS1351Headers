/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIIdentifierDifferMovePair.h>

@protocol _UIIdentifierDifferMovePair <NSObject>
@property (nonatomic,readonly) long long fromIndex; 
@property (nonatomic,readonly) long long toIndex; 
@required
-(long long)fromIndex;
-(long long)toIndex;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIIdentifierDifferMovePair : NSObject <_UIIdentifierDifferMovePair, NSCopying> {

	long long _fromIndex;
	long long _toIndex;

}

@property (assign,nonatomic) long long fromIndex;                   //@synthesize fromIndex=_fromIndex - In the implementation block
@property (assign,nonatomic) long long toIndex;                     //@synthesize toIndex=_toIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(long long)fromIndex;
-(long long)toIndex;
-(id)initWithFromIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)setFromIndex:(long long)arg1 ;
-(void)setToIndex:(long long)arg1 ;
@end

