/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:17 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AUAudioUnitV2Bridge.h>

@interface AUHALOutputUnit : AUAudioUnitV2Bridge {

	/*^block*/id _outputProvider;
	/*^block*/id _inputHandler;
	BOOL _inputWasEnabled;
	BOOL _outputWasEnabled;
	BOOL _inputBusEnabled;
	int _renderObserverToken;
	unordered_map<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long), std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)> > >* _renderObservers;

}

@property (assign,getter=isInputEnabled,nonatomic) BOOL inputEnabled; 
@property (assign,getter=isOutputEnabled,nonatomic) BOOL outputEnabled; 
-(void)dealloc;
-(BOOL)isRunning;
-(void)removeRenderObserver:(long long)arg1 ;
-(long long)tokenByAddingRenderObserver:(/*^block*/id)arg1 ;
-(void)setInputHandler:(/*^block*/id)arg1 ;
-(void)setOutputProvider:(/*^block*/id)arg1 ;
-(void)stopHardware;
-(BOOL)startHardwareAndReturnError:(id*)arg1 ;
-(void)setOutputEnabled:(BOOL)arg1 ;
-(void)setInputEnabled:(BOOL)arg1 ;
-(BOOL)canPerformOutput;
-(BOOL)canPerformInput;
-(void)removeRenderObserver:(/*function pointer*/void*)arg1 userData:(void*)arg2 ;
-(void)addRenderObserver:(/*function pointer*/void*)arg1 userData:(void*)arg2 ;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithAudioUnit:(OpaqueAudioComponentInstanceRef)arg1 description:(AudioComponentDescription)arg2 ;
-(int)enableBus:(unsigned)arg1 scope:(unsigned)arg2 enable:(BOOL)arg3 ;
-(/*^block*/id)_inputHandler;
-(void)initAUHALOutputUnit;
-(/*^block*/id)outputProvider;
-(BOOL)isInputEnabled;
-(BOOL)isOutputEnabled;
@end

