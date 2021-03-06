/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HFStringGenerator;
@class HFServiceNameComponents, UIColor, UIVisualEffect;

@interface HUGridServiceCellTextConfiguration : NSObject {

	HFServiceNameComponents* _nameComponents;
	id<HFStringGenerator> _descriptionText;
	UIColor* _nameTextColor;
	UIColor* _descriptionTextColor;
	UIVisualEffect* _descriptionTextEffect;

}

@property (nonatomic,retain) HFServiceNameComponents * nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
@property (nonatomic,retain) id<HFStringGenerator> descriptionText;                 //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) UIColor * nameTextColor;                               //@synthesize nameTextColor=_nameTextColor - In the implementation block
@property (nonatomic,retain) UIColor * descriptionTextColor;                        //@synthesize descriptionTextColor=_descriptionTextColor - In the implementation block
@property (nonatomic,retain) UIVisualEffect * descriptionTextEffect;                //@synthesize descriptionTextEffect=_descriptionTextEffect - In the implementation block
-(HFServiceNameComponents *)nameComponents;
-(void)setNameComponents:(HFServiceNameComponents *)arg1 ;
-(id<HFStringGenerator>)descriptionText;
-(void)setDescriptionText:(id<HFStringGenerator>)arg1 ;
-(void)setDescriptionTextColor:(UIColor *)arg1 ;
-(UIColor *)nameTextColor;
-(void)setNameTextColor:(UIColor *)arg1 ;
-(UIColor *)descriptionTextColor;
-(UIVisualEffect *)descriptionTextEffect;
-(void)setDescriptionTextEffect:(UIVisualEffect *)arg1 ;
@end

