/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/VideoProcessors/DisparityV3.bundle/DisparityV3
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class StereoDisparityEstimatorPreprocessingParameters, StereoDisparityEstimatorCostParameters, TVL1_v3_RegularizationParameters, TVL1_v3_SolverParameters, HBFGPUParameters;

@interface StereoDisparityEstimatorParameters : NSObject {

	StereoDisparityEstimatorPreprocessingParameters* _preprocessing;
	StereoDisparityEstimatorCostParameters* _cost;
	TVL1_v3_RegularizationParameters* _reg;
	TVL1_v3_SolverParameters* _solver;
	HBFGPUParameters* _hbf;

}

@property (nonatomic,retain) StereoDisparityEstimatorPreprocessingParameters * preprocessing;              //@synthesize preprocessing=_preprocessing - In the implementation block
@property (nonatomic,retain) StereoDisparityEstimatorCostParameters * cost;                                //@synthesize cost=_cost - In the implementation block
@property (nonatomic,retain) TVL1_v3_RegularizationParameters * reg;                                       //@synthesize reg=_reg - In the implementation block
@property (nonatomic,retain) TVL1_v3_SolverParameters * solver;                                            //@synthesize solver=_solver - In the implementation block
@property (nonatomic,retain) HBFGPUParameters * hbf;                                                       //@synthesize hbf=_hbf - In the implementation block
-(id)init;
-(TVL1_v3_SolverParameters *)solver;
-(void)setSolver:(TVL1_v3_SolverParameters *)arg1 ;
-(StereoDisparityEstimatorCostParameters *)cost;
-(void)setCost:(StereoDisparityEstimatorCostParameters *)arg1 ;
-(StereoDisparityEstimatorPreprocessingParameters *)preprocessing;
-(void)setPreprocessing:(StereoDisparityEstimatorPreprocessingParameters *)arg1 ;
-(TVL1_v3_RegularizationParameters *)reg;
-(void)setReg:(TVL1_v3_RegularizationParameters *)arg1 ;
-(HBFGPUParameters *)hbf;
-(void)setHbf:(HBFGPUParameters *)arg1 ;
@end

