/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface SecureBackupBeginPasscodeRequestResults : NSObject <NSSecureCoding> {

	NSString* _iCloudEnvironment;
	NSString* _escrowFederation;
	NSData* _cert;
	NSString* _dsid;
	NSString* _uuid;

}

@property (readonly) NSString * iCloudEnvironment;              //@synthesize iCloudEnvironment=_iCloudEnvironment - In the implementation block
@property (readonly) NSString * escrowFederation;               //@synthesize escrowFederation=_escrowFederation - In the implementation block
@property (readonly) NSData * cert;                             //@synthesize cert=_cert - In the implementation block
@property (readonly) NSString * dsid;                           //@synthesize dsid=_dsid - In the implementation block
@property (readonly) NSString * uuid;                           //@synthesize uuid=_uuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(NSString *)dsid;
-(NSString *)iCloudEnvironment;
-(NSString *)escrowFederation;
-(NSData *)cert;
-(id)initWithStoredCertificate:(id)arg1 uuid:(id)arg2 ;
@end

