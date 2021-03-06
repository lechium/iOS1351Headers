/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSObject;

@interface ODDPointPropertySet : NSObject {

	NSString* mLayoutTypeId;
	NSString* mPresentationName;
	NSString* mPresentationStyleLabel;
	int mPresentationStyleIndex;
	int mPresentationStyleCount;
	NSObject* mPresentationAssociatedId;
	BOOL mCustomVerticalFlip;
	double mCustomScaleX;
	double mCustomScaleY;
	double mCustomOffsetX;
	double mCustomOffsetY;

}
-(id)description;
-(id)layoutTypeId;
-(void)setPresentationName:(id)arg1 ;
-(id)presentationName;
-(id)presentationStyleLabel;
-(int)presentationStyleIndex;
-(double)customScaleX;
-(double)customScaleY;
-(double)customOffsetX;
-(double)customOffsetY;
-(void)setLayoutTypeId:(id)arg1 ;
-(void)setPresentationStyleLabel:(id)arg1 ;
-(void)setPresentationStyleIndex:(int)arg1 ;
-(int)presentationStyleCount;
-(void)setPresentationStyleCount:(int)arg1 ;
-(id)presentationAssociatedId;
-(void)setPresentationAssociatedId:(id)arg1 ;
-(BOOL)customVerticalFlip;
-(void)setCustomVerticalFlip:(BOOL)arg1 ;
-(void)setCustomScaleX:(double)arg1 ;
-(void)setCustomScaleY:(double)arg1 ;
-(void)setCustomOffsetX:(double)arg1 ;
-(void)setCustomOffsetY:(double)arg1 ;
@end

