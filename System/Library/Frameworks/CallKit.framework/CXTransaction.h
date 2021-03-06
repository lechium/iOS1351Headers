/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/CXCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSMutableOrderedSet, NSArray, NSString;

@interface CXTransaction : NSObject <CXCopying, NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSMutableOrderedSet* _mutableActions;

}

@property (nonatomic,copy) NSUUID * UUID;                                       //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * mutableActions;              //@synthesize mutableActions=_mutableActions - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (nonatomic,copy,readonly) NSArray * actions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(BOOL)isComplete;
-(void)addAction:(id)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(id)initWithActions:(id)arg1 ;
-(NSArray *)actions;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(id)sanitizedCopy;
-(NSMutableOrderedSet *)mutableActions;
-(id)allowedClassesForMutableActions;
-(void)addActionsFromTransaction:(id)arg1 ;
-(void)setMutableActions:(NSMutableOrderedSet *)arg1 ;
@end

