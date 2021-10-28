/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, SGContactDetail;

@interface SGContactDetailsHolder : NSObject {

	NSArray* _emailAddresses;
	NSArray* _postalAddresses;
	NSArray* _phoneNumbers;
	NSArray* _instantMessageAddresses;
	NSArray* _socialProfiles;
	SGContactDetail* _birthday;
	SGContactDetail* _photoPath;

}

@property (nonatomic,retain) NSArray * emailAddresses;                       //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,retain) NSArray * postalAddresses;                      //@synthesize postalAddresses=_postalAddresses - In the implementation block
@property (nonatomic,retain) NSArray * phoneNumbers;                         //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,retain) NSArray * instantMessageAddresses;              //@synthesize instantMessageAddresses=_instantMessageAddresses - In the implementation block
@property (nonatomic,retain) NSArray * socialProfiles;                       //@synthesize socialProfiles=_socialProfiles - In the implementation block
@property (nonatomic,retain) SGContactDetail * birthday;                     //@synthesize birthday=_birthday - In the implementation block
@property (nonatomic,retain) SGContactDetail * photoPath;                    //@synthesize photoPath=_photoPath - In the implementation block
-(NSArray *)phoneNumbers;
-(NSArray *)emailAddresses;
-(SGContactDetail *)birthday;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setPhoneNumbers:(NSArray *)arg1 ;
-(NSArray *)instantMessageAddresses;
-(NSArray *)socialProfiles;
-(void)setInstantMessageAddresses:(NSArray *)arg1 ;
-(NSArray *)postalAddresses;
-(void)setBirthday:(SGContactDetail *)arg1 ;
-(void)setSocialProfiles:(NSArray *)arg1 ;
-(void)setPostalAddresses:(NSArray *)arg1 ;
-(SGContactDetail *)photoPath;
-(void)setPhotoPath:(SGContactDetail *)arg1 ;
@end
