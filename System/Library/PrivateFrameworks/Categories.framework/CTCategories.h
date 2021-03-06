/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Categories.framework/Categories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface CTCategories : NSObject {

	NSString* _indexVersionId;

}

@property (copy,readonly) NSArray * availableCategoryIDs; 
+(void)initialize;
+(id)sharedCategories;
+(id)systemHiddenBundleIdentifiersForDeviceFamily:(long long)arg1 ;
+(id)systemUnblockableBundleIdentifiersForDeviceFamily:(long long)arg1 ;
+(long long)currentIOSDevice;
+(id)systemBlockableBundleIdentifiersForDeviceFamily:(long long)arg1 ;
+(id)systemUnblockableBundleIdentifiers;
+(id)systemBlockableBundleIdentifiers;
+(id)systemHiddenBundleIdentifiers;
+(id)systemBundleIdentifiers;
-(id)init;
-(void)dealloc;
-(void)categoryForDomainURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoriesForBundleIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)availableCategoryIDs;
-(void)categoriesForDomainURLs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_emptySharedCache:(id)arg1 ;
-(void)categoriesForBundleIDs:(id)arg1 platform:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)categoriesForDomainNames:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoryForBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoryForDomainName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoryForBundleID:(id)arg1 platform:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)unCategorizedDomainsFromDomains:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)categoryForBundleID:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoryForBundleID:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoryForDomainName:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoryForDomainName:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoryForDomainURL:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoryForDomainURL:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoriesForBundleIDs:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoriesForBundleIDs:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoriesForDomainNames:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoriesForDomainNames:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoriesForDomainURLs:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoriesForDomainURLs:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
@end

