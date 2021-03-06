/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKOperationResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKServerChangeToken, NSNumber;

@interface CKFetchDatabaseChangesOperationResult : CKOperationResult <NSSecureCoding> {

	CKServerChangeToken* _serverChangeToken;
	NSNumber* _status;

}

@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (nonatomic,retain) NSNumber * status;                                    //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
@end

