/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class JDMatchedDepthAndImage, NSArray;

@interface JDDepthAndImagePushResults : NSObject {

	JDMatchedDepthAndImage* _match;
	NSArray* _droppedImages;

}

@property (nonatomic,retain) JDMatchedDepthAndImage * match;              //@synthesize match=_match - In the implementation block
@property (nonatomic,retain) NSArray * droppedImages;                     //@synthesize droppedImages=_droppedImages - In the implementation block
-(JDMatchedDepthAndImage *)match;
-(void)setMatch:(JDMatchedDepthAndImage *)arg1 ;
-(NSArray *)droppedImages;
-(void)setDroppedImages:(NSArray *)arg1 ;
@end

