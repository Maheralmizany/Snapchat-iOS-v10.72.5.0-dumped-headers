//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCZeroDependencyExperimentsProvider.h"

@class NSDictionary, NSString;

@protocol SCExperimentStoring <SCZeroDependencyExperimentsProvider>
- (void)logStudyTriggeredEvent:(NSString *)arg1 experimentId:(NSString *)arg2 source:(long long)arg3;
- (NSString *)experimentIdForStudy:(NSString *)arg1;
- (float)floatForStudy:(NSString *)arg1 forVariable:(NSString *)arg2 defaultValue:(float)arg3;
- (double)doubleForStudy:(NSString *)arg1 forVariable:(NSString *)arg2 defaultValue:(double)arg3;
- (unsigned long long)uIntegerForStudy:(NSString *)arg1 forVariable:(NSString *)arg2 defaultValue:(unsigned long long)arg3;
- (long long)integerForStudy:(NSString *)arg1 forVariable:(NSString *)arg2 defaultValue:(long long)arg3;
- (_Bool)boolForStudy:(NSString *)arg1 forVariable:(NSString *)arg2 defaultValue:(_Bool)arg3;
- (NSString *)stringForStudy:(NSString *)arg1 forVariable:(NSString *)arg2 defaultValue:(NSString *)arg3;
- (NSDictionary *)getAllSettingsForStudy:(NSString *)arg1;
- (NSString *)getStudySettingsJsonWithPrettyPrinted:(_Bool)arg1;
- (NSDictionary *)getStudySettings;
- (void)setStudySettingsFromDictionary:(NSDictionary *)arg1 syncOrigin:(NSString *)arg2;
- (void)setStudySettingsFromJsonDictionary:(NSDictionary *)arg1 syncOrigin:(NSString *)arg2;
- (void)clear;
- (_Bool)saveState;
@end

