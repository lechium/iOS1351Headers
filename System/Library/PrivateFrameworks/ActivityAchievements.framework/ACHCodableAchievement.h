/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivityAchievements/ActivityAchievements-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ACHCodableTemplate, ACHCodableColor, NSString, NSMutableArray;

@interface ACHCodableAchievement : PBCodable <NSCopying> {

	long long _badgeModelVersion;
	double _goalValue;
	double _progressValue;
	ACHCodableTemplate* _achievementTemplate;
	ACHCodableColor* _badgeEnamelColor;
	ACHCodableColor* _badgeMetalColor;
	NSString* _badgeShapeName;
	NSMutableArray* _customPlaceholderValues;
	NSMutableArray* _earnedInstances;
	ACHCodableColor* _enamelTriColor1;
	ACHCodableColor* _enamelTriColor2;
	ACHCodableColor* _enamelTriColor3;
	NSString* _goalUnitString;
	NSString* _localizationBundleURL;
	NSString* _progressUnitString;
	NSString* _propertyListBundleURL;
	NSString* _resourceBundleURL;
	NSString* _section;
	NSString* _stickerBundleURL;
	NSString* _textureFilename;
	BOOL _badgeUsesFullColorEnamel;
	BOOL _badgeUsesTriColorEnamel;
	BOOL _faceHasMetalInlay;
	BOOL _unearnedUsesTwoToneEnamel;
	SCD_Struct_AC2 _has;

}

@property (nonatomic,readonly) BOOL hasAchievementTemplate; 
@property (nonatomic,retain) ACHCodableTemplate * achievementTemplate;              //@synthesize achievementTemplate=_achievementTemplate - In the implementation block
@property (nonatomic,retain) NSMutableArray * earnedInstances;                      //@synthesize earnedInstances=_earnedInstances - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizationBundleURL; 
@property (nonatomic,retain) NSString * localizationBundleURL;                      //@synthesize localizationBundleURL=_localizationBundleURL - In the implementation block
@property (nonatomic,readonly) BOOL hasResourceBundleURL; 
@property (nonatomic,retain) NSString * resourceBundleURL;                          //@synthesize resourceBundleURL=_resourceBundleURL - In the implementation block
@property (nonatomic,readonly) BOOL hasStickerBundleURL; 
@property (nonatomic,retain) NSString * stickerBundleURL;                           //@synthesize stickerBundleURL=_stickerBundleURL - In the implementation block
@property (nonatomic,readonly) BOOL hasBadgeShapeName; 
@property (nonatomic,retain) NSString * badgeShapeName;                             //@synthesize badgeShapeName=_badgeShapeName - In the implementation block
@property (nonatomic,readonly) BOOL hasBadgeMetalColor; 
@property (nonatomic,retain) ACHCodableColor * badgeMetalColor;                     //@synthesize badgeMetalColor=_badgeMetalColor - In the implementation block
@property (assign,nonatomic) BOOL hasBadgeUsesFullColorEnamel; 
@property (assign,nonatomic) BOOL badgeUsesFullColorEnamel;                         //@synthesize badgeUsesFullColorEnamel=_badgeUsesFullColorEnamel - In the implementation block
@property (nonatomic,readonly) BOOL hasBadgeEnamelColor; 
@property (nonatomic,retain) ACHCodableColor * badgeEnamelColor;                    //@synthesize badgeEnamelColor=_badgeEnamelColor - In the implementation block
@property (nonatomic,readonly) BOOL hasPropertyListBundleURL; 
@property (nonatomic,retain) NSString * propertyListBundleURL;                      //@synthesize propertyListBundleURL=_propertyListBundleURL - In the implementation block
@property (assign,nonatomic) BOOL hasProgressValue; 
@property (assign,nonatomic) double progressValue;                                  //@synthesize progressValue=_progressValue - In the implementation block
@property (nonatomic,readonly) BOOL hasProgressUnitString; 
@property (nonatomic,retain) NSString * progressUnitString;                         //@synthesize progressUnitString=_progressUnitString - In the implementation block
@property (assign,nonatomic) BOOL hasGoalValue; 
@property (assign,nonatomic) double goalValue;                                      //@synthesize goalValue=_goalValue - In the implementation block
@property (nonatomic,readonly) BOOL hasGoalUnitString; 
@property (nonatomic,retain) NSString * goalUnitString;                             //@synthesize goalUnitString=_goalUnitString - In the implementation block
@property (nonatomic,retain) NSMutableArray * customPlaceholderValues;              //@synthesize customPlaceholderValues=_customPlaceholderValues - In the implementation block
@property (nonatomic,readonly) BOOL hasTextureFilename; 
@property (nonatomic,retain) NSString * textureFilename;                            //@synthesize textureFilename=_textureFilename - In the implementation block
@property (assign,nonatomic) BOOL hasUnearnedUsesTwoToneEnamel; 
@property (assign,nonatomic) BOOL unearnedUsesTwoToneEnamel;                        //@synthesize unearnedUsesTwoToneEnamel=_unearnedUsesTwoToneEnamel - In the implementation block
@property (nonatomic,readonly) BOOL hasSection; 
@property (nonatomic,retain) NSString * section;                                    //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) BOOL hasFaceHasMetalInlay; 
@property (assign,nonatomic) BOOL faceHasMetalInlay;                                //@synthesize faceHasMetalInlay=_faceHasMetalInlay - In the implementation block
@property (assign,nonatomic) BOOL hasBadgeUsesTriColorEnamel; 
@property (assign,nonatomic) BOOL badgeUsesTriColorEnamel;                          //@synthesize badgeUsesTriColorEnamel=_badgeUsesTriColorEnamel - In the implementation block
@property (nonatomic,readonly) BOOL hasEnamelTriColor1; 
@property (nonatomic,retain) ACHCodableColor * enamelTriColor1;                     //@synthesize enamelTriColor1=_enamelTriColor1 - In the implementation block
@property (nonatomic,readonly) BOOL hasEnamelTriColor2; 
@property (nonatomic,retain) ACHCodableColor * enamelTriColor2;                     //@synthesize enamelTriColor2=_enamelTriColor2 - In the implementation block
@property (nonatomic,readonly) BOOL hasEnamelTriColor3; 
@property (nonatomic,retain) ACHCodableColor * enamelTriColor3;                     //@synthesize enamelTriColor3=_enamelTriColor3 - In the implementation block
@property (assign,nonatomic) BOOL hasBadgeModelVersion; 
@property (assign,nonatomic) long long badgeModelVersion;                           //@synthesize badgeModelVersion=_badgeModelVersion - In the implementation block
+(Class)earnedInstancesType;
+(Class)customPlaceholderValuesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)section;
-(void)setSection:(NSString *)arg1 ;
-(double)goalValue;
-(void)setGoalValue:(double)arg1 ;
-(BOOL)hasGoalValue;
-(double)progressValue;
-(void)setProgressValue:(double)arg1 ;
-(BOOL)hasSection;
-(void)setBadgeShapeName:(NSString *)arg1 ;
-(void)setBadgeMetalColor:(ACHCodableColor *)arg1 ;
-(void)setBadgeUsesFullColorEnamel:(BOOL)arg1 ;
-(void)setUnearnedUsesTwoToneEnamel:(BOOL)arg1 ;
-(void)setFaceHasMetalInlay:(BOOL)arg1 ;
-(void)setBadgeEnamelColor:(ACHCodableColor *)arg1 ;
-(void)setBadgeUsesTriColorEnamel:(BOOL)arg1 ;
-(void)setEnamelTriColor1:(ACHCodableColor *)arg1 ;
-(void)setEnamelTriColor2:(ACHCodableColor *)arg1 ;
-(void)setEnamelTriColor3:(ACHCodableColor *)arg1 ;
-(void)setBadgeModelVersion:(long long)arg1 ;
-(NSString *)propertyListBundleURL;
-(void)addEarnedInstances:(id)arg1 ;
-(void)addCustomPlaceholderValues:(id)arg1 ;
-(void)setAchievementTemplate:(ACHCodableTemplate *)arg1 ;
-(unsigned long long)earnedInstancesCount;
-(void)clearEarnedInstances;
-(id)earnedInstancesAtIndex:(unsigned long long)arg1 ;
-(void)setLocalizationBundleURL:(NSString *)arg1 ;
-(void)setResourceBundleURL:(NSString *)arg1 ;
-(void)setStickerBundleURL:(NSString *)arg1 ;
-(void)setPropertyListBundleURL:(NSString *)arg1 ;
-(void)setProgressUnitString:(NSString *)arg1 ;
-(void)setGoalUnitString:(NSString *)arg1 ;
-(unsigned long long)customPlaceholderValuesCount;
-(void)clearCustomPlaceholderValues;
-(id)customPlaceholderValuesAtIndex:(unsigned long long)arg1 ;
-(void)setTextureFilename:(NSString *)arg1 ;
-(BOOL)hasAchievementTemplate;
-(BOOL)hasLocalizationBundleURL;
-(BOOL)hasResourceBundleURL;
-(BOOL)hasStickerBundleURL;
-(BOOL)hasBadgeShapeName;
-(BOOL)hasBadgeMetalColor;
-(void)setHasBadgeUsesFullColorEnamel:(BOOL)arg1 ;
-(BOOL)hasBadgeUsesFullColorEnamel;
-(BOOL)hasBadgeEnamelColor;
-(BOOL)hasPropertyListBundleURL;
-(void)setHasProgressValue:(BOOL)arg1 ;
-(BOOL)hasProgressValue;
-(BOOL)hasProgressUnitString;
-(void)setHasGoalValue:(BOOL)arg1 ;
-(BOOL)hasGoalUnitString;
-(BOOL)hasTextureFilename;
-(void)setHasUnearnedUsesTwoToneEnamel:(BOOL)arg1 ;
-(BOOL)hasUnearnedUsesTwoToneEnamel;
-(void)setHasFaceHasMetalInlay:(BOOL)arg1 ;
-(BOOL)hasFaceHasMetalInlay;
-(void)setHasBadgeUsesTriColorEnamel:(BOOL)arg1 ;
-(BOOL)hasBadgeUsesTriColorEnamel;
-(BOOL)hasEnamelTriColor1;
-(BOOL)hasEnamelTriColor2;
-(BOOL)hasEnamelTriColor3;
-(void)setHasBadgeModelVersion:(BOOL)arg1 ;
-(BOOL)hasBadgeModelVersion;
-(ACHCodableTemplate *)achievementTemplate;
-(NSMutableArray *)earnedInstances;
-(void)setEarnedInstances:(NSMutableArray *)arg1 ;
-(NSString *)localizationBundleURL;
-(NSString *)resourceBundleURL;
-(NSString *)stickerBundleURL;
-(NSString *)badgeShapeName;
-(ACHCodableColor *)badgeMetalColor;
-(BOOL)badgeUsesFullColorEnamel;
-(ACHCodableColor *)badgeEnamelColor;
-(NSString *)progressUnitString;
-(NSString *)goalUnitString;
-(NSMutableArray *)customPlaceholderValues;
-(void)setCustomPlaceholderValues:(NSMutableArray *)arg1 ;
-(NSString *)textureFilename;
-(BOOL)unearnedUsesTwoToneEnamel;
-(BOOL)faceHasMetalInlay;
-(BOOL)badgeUsesTriColorEnamel;
-(ACHCodableColor *)enamelTriColor1;
-(ACHCodableColor *)enamelTriColor2;
-(ACHCodableColor *)enamelTriColor3;
-(long long)badgeModelVersion;
@end

