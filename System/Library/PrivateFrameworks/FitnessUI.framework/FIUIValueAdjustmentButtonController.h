/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSTimer, FIUIWorkoutLapLengthIndexTranslator, UIButton;

@interface FIUIValueAdjustmentButtonController : NSObject {

	NSTimer* _plusMinusActionTimer;
	long long _plusMinusActionRepeatCount;
	BOOL _didUserUpdatevalue;
	double _value;
	double _valueStepIncremement;
	double _minumumStepValueIncrement;
	double _maxValue;
	double _minValue;
	/*^block*/id _valueUpdateHandler;
	FIUIWorkoutLapLengthIndexTranslator* _lapLengthIndexTranslator;
	/*^block*/id _buttonStateUpdateHandler;
	UIButton* _incrementButton;
	UIButton* _decrementButton;

}

@property (assign,nonatomic) double value;                                                                //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double valueStepIncremement;                                                 //@synthesize valueStepIncremement=_valueStepIncremement - In the implementation block
@property (assign,nonatomic) double minumumStepValueIncrement;                                            //@synthesize minumumStepValueIncrement=_minumumStepValueIncrement - In the implementation block
@property (assign,nonatomic) double maxValue;                                                             //@synthesize maxValue=_maxValue - In the implementation block
@property (assign,nonatomic) double minValue;                                                             //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,copy) id valueUpdateHandler;                                                         //@synthesize valueUpdateHandler=_valueUpdateHandler - In the implementation block
@property (nonatomic,retain) FIUIWorkoutLapLengthIndexTranslator * lapLengthIndexTranslator;              //@synthesize lapLengthIndexTranslator=_lapLengthIndexTranslator - In the implementation block
@property (nonatomic,copy) id buttonStateUpdateHandler;                                                   //@synthesize buttonStateUpdateHandler=_buttonStateUpdateHandler - In the implementation block
@property (assign,nonatomic) BOOL didUserUpdatevalue;                                                     //@synthesize didUserUpdatevalue=_didUserUpdatevalue - In the implementation block
@property (nonatomic,__weak,readonly) UIButton * incrementButton;                                         //@synthesize incrementButton=_incrementButton - In the implementation block
@property (nonatomic,__weak,readonly) UIButton * decrementButton;                                         //@synthesize decrementButton=_decrementButton - In the implementation block
-(double)value;
-(void)setValue:(double)arg1 ;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(double)minValue;
-(void)setMinValue:(double)arg1 ;
-(void)_plusMinusButtonTouchDown:(id)arg1 ;
-(void)_plusMinusButtonTouchUpInside:(id)arg1 ;
-(void)_plusMinusButtonTouchCancel:(id)arg1 ;
-(void)_updateButton:(id)arg1 forPressedState:(BOOL)arg2 ;
-(void)_plusMinusActionTimerDidFire:(id)arg1 ;
-(void)_performPlusMinusActionWithButton:(id)arg1 ;
-(FIUIWorkoutLapLengthIndexTranslator *)lapLengthIndexTranslator;
-(void)_performPlusMinusActionWithIndexTranslationForButton:(id)arg1 ;
-(double)valueStepIncremement;
-(void)_incrementRepeatCount;
-(double)minumumStepValueIncrement;
-(void)_notifyValueChanged;
-(void)_updatePlusMinusButtonStates;
-(id)valueUpdateHandler;
-(UIButton *)decrementButton;
-(UIButton *)incrementButton;
-(id)buttonStateUpdateHandler;
-(void)setIncrementButton:(id)arg1 decrementButton:(id)arg2 ;
-(void)setValueStepIncremement:(double)arg1 ;
-(void)setMinumumStepValueIncrement:(double)arg1 ;
-(void)setValueUpdateHandler:(id)arg1 ;
-(void)setLapLengthIndexTranslator:(FIUIWorkoutLapLengthIndexTranslator *)arg1 ;
-(void)setButtonStateUpdateHandler:(id)arg1 ;
-(BOOL)didUserUpdatevalue;
-(void)setDidUserUpdatevalue:(BOOL)arg1 ;
@end

