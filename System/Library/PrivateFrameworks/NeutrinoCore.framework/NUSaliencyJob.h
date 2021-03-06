/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NURenderJob.h>

@class VNSaliencyImageObservation, NUSaliencyRequest;

@interface NUSaliencyJob : NURenderJob {

	VNSaliencyImageObservation* _saliencyObservation;

}

@property (nonatomic,readonly) NUSaliencyRequest * saliencyRequest; 
@property (nonatomic,retain) VNSaliencyImageObservation * saliencyObservation;              //@synthesize saliencyObservation=_saliencyObservation - In the implementation block
-(id)result;
-(BOOL)render:(out id*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)cleanUp;
-(VNSaliencyImageObservation *)saliencyObservation;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithSaliencyRequest:(id)arg1 ;
-(NUSaliencyRequest *)saliencyRequest;
-(id)saliencyObservationForImage:(id)arg1 error:(out id*)arg2 ;
-(void)setSaliencyObservation:(VNSaliencyImageObservation *)arg1 ;
@end

