//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPBaseInteractorInput.h"

@class NSArray, NSString, SPPersonsSource, SPPreviewsDebugParams, SPScenario;

@protocol SPPreviewsInteractorInput <SPBaseInteractorInput>
- (void)downloadFullsizeScenario:(SPScenario *)arg1;
- (void)downloadPreviewsScenarios:(NSArray *)arg1;
- (void)stopFullsizePrviewsPrefetching;
- (void)prefetchFullsizePreviewScenarios:(NSArray *)arg1 personsSource:(SPPersonsSource *)arg2;
- (void)stopPrefetching;
- (void)prefetchPreviewScenarios:(NSArray *)arg1 personsSource:(SPPersonsSource *)arg2;
- (void)obtainPreviewScenariosWithQuery:(NSString *)arg1 searchMode:(unsigned long long)arg2 gender:(unsigned long long)arg3 secondPersonGender:(unsigned long long)arg4 faceMode:(unsigned long long)arg5 showTwoPersonsScenarios:(_Bool)arg6 preferredScenariosIds:(NSArray *)arg7 itemsInRow:(unsigned long long)arg8 debugParams:(SPPreviewsDebugParams *)arg9;
@end
