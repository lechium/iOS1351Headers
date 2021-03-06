/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRKIdentifiedCardSectionViewProviding.h>

@protocol CRCard, CRKCardSectionViewProviding;
@class NSString, NSArray;

@interface _CRKBundleIdentifiedCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding> {

	NSString* providerIdentifier;
	id<CRCard> card;
	NSArray* viewConfigurations;
	id<CRKCardSectionViewProviding> _realCardSectionViewProvider;

}

@property (nonatomic,copy) NSString * providerIdentifier; 
@property (nonatomic,retain) id<CRKCardSectionViewProviding> realCardSectionViewProvider;              //@synthesize realCardSectionViewProvider=_realCardSectionViewProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CRCard> card; 
@property (nonatomic,readonly) NSArray * viewConfigurations; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(NSString *)providerIdentifier;
-(void)setProviderIdentifier:(NSString *)arg1 ;
-(id<CRCard>)card;
-(void)setRealCardSectionViewProvider:(id<CRKCardSectionViewProviding>)arg1 ;
-(BOOL)vetoDisplayOfCardSection:(id)arg1 ;
-(unsigned long long)displayPriorityForCardSection:(id)arg1 ;
-(NSArray *)viewConfigurations;
-(id<CRKCardSectionViewProviding>)realCardSectionViewProvider;
@end

