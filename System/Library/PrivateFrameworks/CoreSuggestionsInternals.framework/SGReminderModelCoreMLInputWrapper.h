/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SGReminderModelCoreMLInputWrapper : NSObject <MLFeatureProvider> {

	MLMultiArray* _R;
	MLMultiArray* _D;
	MLMultiArray* _L;
	MLMultiArray* _I;
	MLMultiArray* _A;
	MLMultiArray* _bi_lstm_0_h_in;
	MLMultiArray* _bi_lstm_0_c_in;
	MLMultiArray* _bi_lstm_0_h_in_rev;
	MLMultiArray* _bi_lstm_0_c_in_rev;
	MLMultiArray* _bi_lstm_1_h_in;
	MLMultiArray* _bi_lstm_1_c_in;
	MLMultiArray* _bi_lstm_1_h_in_rev;
	MLMultiArray* _bi_lstm_1_c_in_rev;

}

@property (readonly,nonatomic,retain) MLMultiArray * R;                      //@synthesize R=_R - In the implementation block
@property (nonatomic,retain) MLMultiArray * D;                               //@synthesize D=_D - In the implementation block
@property (L,nonatomic,retain) MLMultiArray * L;                             //@synthesize L=_L - In the implementation block
@property (I,nonatomic,retain) MLMultiArray * I;                             //@synthesize I=_I - In the implementation block
@property (A,nonatomic,retain) MLMultiArray * A;                             //@synthesize A=_A - In the implementation block
@property (nonatomic,retain) MLMultiArray * bi_lstm_0_h_in;                  //@synthesize bi_lstm_0_h_in=_bi_lstm_0_h_in - In the implementation block
@property (nonatomic,retain) MLMultiArray * bi_lstm_0_c_in;                  //@synthesize bi_lstm_0_c_in=_bi_lstm_0_c_in - In the implementation block
@property (nonatomic,retain) MLMultiArray * bi_lstm_0_h_in_rev;              //@synthesize bi_lstm_0_h_in_rev=_bi_lstm_0_h_in_rev - In the implementation block
@property (nonatomic,retain) MLMultiArray * bi_lstm_0_c_in_rev;              //@synthesize bi_lstm_0_c_in_rev=_bi_lstm_0_c_in_rev - In the implementation block
@property (nonatomic,retain) MLMultiArray * bi_lstm_1_h_in;                  //@synthesize bi_lstm_1_h_in=_bi_lstm_1_h_in - In the implementation block
@property (nonatomic,retain) MLMultiArray * bi_lstm_1_c_in;                  //@synthesize bi_lstm_1_c_in=_bi_lstm_1_c_in - In the implementation block
@property (nonatomic,retain) MLMultiArray * bi_lstm_1_h_in_rev;              //@synthesize bi_lstm_1_h_in_rev=_bi_lstm_1_h_in_rev - In the implementation block
@property (nonatomic,retain) MLMultiArray * bi_lstm_1_c_in_rev;              //@synthesize bi_lstm_1_c_in_rev=_bi_lstm_1_c_in_rev - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(MLMultiArray *)I;
-(void)setI:(MLMultiArray *)arg1 ;
-(void)setA:(MLMultiArray *)arg1 ;
-(void)setR:(MLMultiArray *)arg1 ;
-(id)initWithR:(id)arg1 D:(id)arg2 L:(id)arg3 I:(id)arg4 A:(id)arg5 ;
-(id)initWithR:(id)arg1 D:(id)arg2 L:(id)arg3 I:(id)arg4 A:(id)arg5 bi_lstm_0_h_in:(id)arg6 bi_lstm_0_c_in:(id)arg7 bi_lstm_0_h_in_rev:(id)arg8 bi_lstm_0_c_in_rev:(id)arg9 bi_lstm_1_h_in:(id)arg10 bi_lstm_1_c_in:(id)arg11 bi_lstm_1_h_in_rev:(id)arg12 bi_lstm_1_c_in_rev:(id)arg13 ;
-(MLMultiArray *)R;
-(MLMultiArray *)D;
-(void)setD:(MLMultiArray *)arg1 ;
-(MLMultiArray *)L;
-(void)setL:(MLMultiArray *)arg1 ;
-(MLMultiArray *)A;
-(MLMultiArray *)bi_lstm_0_h_in;
-(void)setBi_lstm_0_h_in:(MLMultiArray *)arg1 ;
-(MLMultiArray *)bi_lstm_0_c_in;
-(void)setBi_lstm_0_c_in:(MLMultiArray *)arg1 ;
-(MLMultiArray *)bi_lstm_0_h_in_rev;
-(void)setBi_lstm_0_h_in_rev:(MLMultiArray *)arg1 ;
-(MLMultiArray *)bi_lstm_0_c_in_rev;
-(void)setBi_lstm_0_c_in_rev:(MLMultiArray *)arg1 ;
-(MLMultiArray *)bi_lstm_1_h_in;
-(void)setBi_lstm_1_h_in:(MLMultiArray *)arg1 ;
-(MLMultiArray *)bi_lstm_1_c_in;
-(void)setBi_lstm_1_c_in:(MLMultiArray *)arg1 ;
-(MLMultiArray *)bi_lstm_1_h_in_rev;
-(void)setBi_lstm_1_h_in_rev:(MLMultiArray *)arg1 ;
-(MLMultiArray *)bi_lstm_1_c_in_rev;
-(void)setBi_lstm_1_c_in_rev:(MLMultiArray *)arg1 ;
@end
