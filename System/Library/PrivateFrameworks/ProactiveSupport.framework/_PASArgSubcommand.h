/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray, NSMutableSet;

@interface _PASArgSubcommand : NSObject {

	NSString* _name;
	NSString* _helpDescription;
	/*^block*/id _handler;
	NSMutableArray* _registeredOptions;
	NSMutableSet* _requiredOptions;

}

@property (nonatomic,retain) NSMutableArray * registeredOptions;              //@synthesize registeredOptions=_registeredOptions - In the implementation block
@property (nonatomic,retain) NSMutableSet * requiredOptions;                  //@synthesize requiredOptions=_requiredOptions - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * helpDescription;               //@synthesize helpDescription=_helpDescription - In the implementation block
@property (nonatomic,readonly) id handler;                                    //@synthesize handler=_handler - In the implementation block
+(id)subcommandWithName:(id)arg1 help:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)simpleSubcommandWithHelpGenerator:(/*^block*/id)arg1 name:(id)arg2 help:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)description;
-(NSString *)name;
-(id)handler;
-(NSString *)helpDescription;
-(id)initWithName:(id)arg1 help:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)registerOption:(id)arg1 ;
-(id)optionShortHelp;
-(id)optionLongHelp;
-(id)naiveUsageHelpWithPositionalArgString:(id)arg1 ;
-(id)customUsageHelpWithUsageOverride:(id)arg1 positionalArgString:(id)arg2 optionHelpOverride:(id)arg3 additionalHelpText:(id)arg4 ;
-(NSMutableArray *)registeredOptions;
-(void)setRegisteredOptions:(NSMutableArray *)arg1 ;
-(NSMutableSet *)requiredOptions;
-(void)setRequiredOptions:(NSMutableSet *)arg1 ;
@end

