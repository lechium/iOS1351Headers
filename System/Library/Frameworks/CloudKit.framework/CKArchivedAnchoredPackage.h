/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKArchivedAnchoredPackage : NSObject <NSSecureCoding> {

	NSString* _anchorPath;
	NSString* _packagePath;
	NSString* _UUID;

}

@property (nonatomic,retain) NSString * anchorPath;               //@synthesize anchorPath=_anchorPath - In the implementation block
@property (nonatomic,retain) NSString * packagePath;              //@synthesize packagePath=_packagePath - In the implementation block
@property (nonatomic,retain) NSString * UUID;                     //@synthesize UUID=_UUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(NSString *)anchorPath;
-(NSString *)packagePath;
-(void)setAnchorPath:(NSString *)arg1 ;
-(void)setPackagePath:(NSString *)arg1 ;
@end

