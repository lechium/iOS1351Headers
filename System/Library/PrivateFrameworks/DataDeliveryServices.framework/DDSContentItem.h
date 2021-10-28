/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class DDSAsset, NSDictionary, NSURL;

@interface DDSContentItem : NSObject {

	DDSAsset* _parentAsset;
	NSDictionary* _contents;

}

@property (nonatomic,retain) DDSAsset * parentAsset;               //@synthesize parentAsset=_parentAsset - In the implementation block
@property (nonatomic,retain) NSDictionary * contents;              //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) NSURL * path; 
-(id)init;
-(NSDictionary *)contents;
-(NSURL *)path;
-(void)setContents:(NSDictionary *)arg1 ;
-(id)initWithParentAsset:(id)arg1 contents:(id)arg2 ;
-(DDSAsset *)parentAsset;
-(void)setParentAsset:(DDSAsset *)arg1 ;
@end
