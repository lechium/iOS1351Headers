/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface RMModelAssetReference : NSObject {

	NSString* _identifier;
	NSArray* _assetTypes;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assetTypes;               //@synthesize assetTypes=_assetTypes - In the implementation block
-(NSString *)identifier;
-(NSArray *)assetTypes;
-(id)initWithIdentifier:(id)arg1 assetTypes:(id)arg2 ;
@end

