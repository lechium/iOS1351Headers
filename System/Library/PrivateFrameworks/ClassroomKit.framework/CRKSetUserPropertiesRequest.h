/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTaskRequest.h>

@class NSString, DMFControlGroupIdentifier, NSData, NSNumber;

@interface CRKSetUserPropertiesRequest : CATTaskRequest {

	NSString* _userIdentifier;
	DMFControlGroupIdentifier* _courseIdentifier;
	NSString* _displayName;
	NSString* _givenName;
	NSString* _familyName;
	NSString* _phoneticGivenName;
	NSString* _phoneticFamilyName;
	NSString* _userSource;
	NSData* _imageData;
	NSNumber* _useMeCardIfAvailable;

}

@property (nonatomic,copy) NSString * userIdentifier;                                   //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,retain) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * givenName;                                        //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy) NSString * familyName;                                       //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy) NSString * phoneticGivenName;                                //@synthesize phoneticGivenName=_phoneticGivenName - In the implementation block
@property (nonatomic,copy) NSString * phoneticFamilyName;                               //@synthesize phoneticFamilyName=_phoneticFamilyName - In the implementation block
@property (nonatomic,copy) NSString * userSource;                                       //@synthesize userSource=_userSource - In the implementation block
@property (nonatomic,copy) NSData * imageData;                                          //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSNumber * useMeCardIfAvailable;                           //@synthesize useMeCardIfAvailable=_useMeCardIfAvailable - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)givenName;
-(void)setGivenName:(NSString *)arg1 ;
-(NSString *)familyName;
-(void)setFamilyName:(NSString *)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSData *)imageData;
-(NSString *)phoneticGivenName;
-(void)setPhoneticGivenName:(NSString *)arg1 ;
-(NSString *)phoneticFamilyName;
-(void)setPhoneticFamilyName:(NSString *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(NSString *)userSource;
-(NSNumber *)useMeCardIfAvailable;
-(void)setUserSource:(NSString *)arg1 ;
-(void)setUseMeCardIfAvailable:(NSNumber *)arg1 ;
@end
