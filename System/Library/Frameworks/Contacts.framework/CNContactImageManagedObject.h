/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSUUID, NSString, NSData, NSDate, NSNumber;

@interface CNContactImageManagedObject : NSManagedObject

@property (nonatomic,retain) NSUUID * identifier; 
@property (nonatomic,retain) NSString * contactIdentifier; 
@property (nonatomic,retain) NSData * imageData; 
@property (nonatomic,retain) NSDate * lastUsedDate; 
@property (nonatomic,retain) NSString * cropRectString; 
@property (nonatomic,retain) NSNumber * source; 
@property (nonatomic,retain) NSString * sourceIdentifier; 
@property (nonatomic,retain) NSString * variant; 
+(/*^block*/id)managedObjectToContactImageTransform;
-(id)cropRectStringFromCGRect:(CGRect)arg1 ;
-(void)updateWithContactImage:(id)arg1 ;
-(void)setupWithContactImage:(id)arg1 contactIdentifier:(id)arg2 ;
@end

