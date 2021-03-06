/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CTCellularPlanProfile : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isSelected;
	BOOL _isBootstrap;
	BOOL _isDisableNotAllowed;
	BOOL _isDeleteNotAllowed;
	BOOL _requiresUserConsent;
	NSData* _profileId;
	NSString* _iccid;

}

@property (assign,nonatomic) BOOL isSelected;                       //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,nonatomic) BOOL isBootstrap;                      //@synthesize isBootstrap=_isBootstrap - In the implementation block
@property (assign,nonatomic) BOOL isDisableNotAllowed;              //@synthesize isDisableNotAllowed=_isDisableNotAllowed - In the implementation block
@property (assign,nonatomic) BOOL isDeleteNotAllowed;               //@synthesize isDeleteNotAllowed=_isDeleteNotAllowed - In the implementation block
@property (assign,nonatomic) BOOL requiresUserConsent;              //@synthesize requiresUserConsent=_requiresUserConsent - In the implementation block
@property (nonatomic,copy) NSData * profileId;                      //@synthesize profileId=_profileId - In the implementation block
@property (nonatomic,copy) NSString * iccid;                        //@synthesize iccid=_iccid - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)iccid;
-(BOOL)isSelected;
-(void)setIccid:(NSString *)arg1 ;
-(NSData *)profileId;
-(BOOL)isDisableNotAllowed;
-(BOOL)isDeleteNotAllowed;
-(BOOL)requiresUserConsent;
-(void)setRequiresUserConsent:(BOOL)arg1 ;
-(void)setProfileId:(NSData *)arg1 ;
-(void)setIsSelected:(BOOL)arg1 ;
-(void)setIsBootstrap:(BOOL)arg1 ;
-(void)setIsDisableNotAllowed:(BOOL)arg1 ;
-(void)setIsDeleteNotAllowed:(BOOL)arg1 ;
-(id)initWithProfileId:(id)arg1 iccid:(id)arg2 selected:(BOOL)arg3 bootstrap:(BOOL)arg4 disableNotAllowed:(BOOL)arg5 deleteNotAllowed:(BOOL)arg6 requiresUserConsent:(BOOL)arg7 ;
-(BOOL)isBootstrap;
@end

