/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNContactImageRequest.h>

@class NSArray, NSString, NSPersistentStoreRequest;

@interface CNContactImageFetchRequest : NSObject <CNContactImageRequest> {

	NSArray* _contactIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSPersistentStoreRequest * persistentStoreRequest; 
@property (nonatomic,retain) NSArray * contactIdentifiers;                                     //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
+(id)recentImagesRequestForContactIdenfitiers:(id)arg1 ;
+(id)predicateForImagesMatchingContactIdentifiers:(id)arg1 ;
-(NSPersistentStoreRequest *)persistentStoreRequest;
-(NSArray *)contactIdentifiers;
-(void)setContactIdentifiers:(NSArray *)arg1 ;
-(id)initWithContactIdentifiers:(id)arg1 ;
@end

