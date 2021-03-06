/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarPlay/CarPlay-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPImageSet, NSArray, CPTravelEstimates, NSUUID, NSMeasurement, NSSet, UIImage;

@interface CPManeuver : NSObject <NSCopying, NSSecureCoding> {

	CPImageSet* _symbolSet;
	NSArray* _instructionVariants;
	CPTravelEstimates* _initialTravelEstimates;
	NSArray* _attributedInstructionVariants;
	id _userInfo;
	NSUUID* _identifier;
	unsigned long long _maneuverType;
	NSArray* _roadFollowingManeuverVariants;
	unsigned long long _trafficSide;
	unsigned long long _junctionType;
	NSMeasurement* _junctionExitAngle;
	NSSet* _junctionElementAngles;
	long long _displayStyle;
	CPImageSet* _junctionImageSet;

}

@property (nonatomic,readonly) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long maneuverType;                         //@synthesize maneuverType=_maneuverType - In the implementation block
@property (nonatomic,copy) NSArray * roadFollowingManeuverVariants;                   //@synthesize roadFollowingManeuverVariants=_roadFollowingManeuverVariants - In the implementation block
@property (assign,nonatomic) unsigned long long trafficSide;                          //@synthesize trafficSide=_trafficSide - In the implementation block
@property (assign,nonatomic) unsigned long long junctionType;                         //@synthesize junctionType=_junctionType - In the implementation block
@property (nonatomic,copy) NSMeasurement * junctionExitAngle;                         //@synthesize junctionExitAngle=_junctionExitAngle - In the implementation block
@property (nonatomic,copy) NSSet * junctionElementAngles;                             //@synthesize junctionElementAngles=_junctionElementAngles - In the implementation block
@property (readonly) NSArray * stringInstructionVariants; 
@property (assign,nonatomic) long long displayStyle;                                  //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,retain) CPImageSet * junctionImageSet;                           //@synthesize junctionImageSet=_junctionImageSet - In the implementation block
@property (nonatomic,retain) CPImageSet * symbolSet;                                  //@synthesize symbolSet=_symbolSet - In the implementation block
@property (nonatomic,retain) UIImage * symbolImage; 
@property (nonatomic,retain) UIImage * junctionImage; 
@property (nonatomic,copy) NSArray * instructionVariants;                             //@synthesize instructionVariants=_instructionVariants - In the implementation block
@property (nonatomic,retain) CPTravelEstimates * initialTravelEstimates;              //@synthesize initialTravelEstimates=_initialTravelEstimates - In the implementation block
@property (nonatomic,copy) NSArray * attributedInstructionVariants;                   //@synthesize attributedInstructionVariants=_attributedInstructionVariants - In the implementation block
@property (nonatomic,retain) id userInfo;                                             //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_descriptionForManeuverType:(unsigned long long)arg1 ;
+(id)_descriptionForTrafficSide:(unsigned long long)arg1 ;
+(id)_descriptionForJunctionType:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setUserInfo:(id)arg1 ;
-(unsigned long long)maneuverType;
-(void)setManeuverType:(unsigned long long)arg1 ;
-(unsigned long long)junctionType;
-(void)setJunctionType:(unsigned long long)arg1 ;
-(long long)displayStyle;
-(void)setDisplayStyle:(long long)arg1 ;
-(UIImage *)symbolImage;
-(void)setSymbolImage:(UIImage *)arg1 ;
-(CPImageSet *)symbolSet;
-(NSArray *)instructionVariants;
-(NSArray *)attributedInstructionVariants;
-(NSArray *)roadFollowingManeuverVariants;
-(CPTravelEstimates *)initialTravelEstimates;
-(unsigned long long)trafficSide;
-(NSMeasurement *)junctionExitAngle;
-(NSSet *)junctionElementAngles;
-(CPImageSet *)junctionImageSet;
-(void)setSymbolSet:(CPImageSet *)arg1 ;
-(void)setJunctionImageSet:(CPImageSet *)arg1 ;
-(void)setInstructionVariants:(NSArray *)arg1 ;
-(void)setAttributedInstructionVariants:(NSArray *)arg1 ;
-(void)setRoadFollowingManeuverVariants:(NSArray *)arg1 ;
-(void)setInitialTravelEstimates:(CPTravelEstimates *)arg1 ;
-(void)setTrafficSide:(unsigned long long)arg1 ;
-(void)setJunctionExitAngle:(NSMeasurement *)arg1 ;
-(void)setJunctionElementAngles:(NSSet *)arg1 ;
-(UIImage *)junctionImage;
-(NSArray *)stringInstructionVariants;
-(void)setJunctionImage:(UIImage *)arg1 ;
@end

