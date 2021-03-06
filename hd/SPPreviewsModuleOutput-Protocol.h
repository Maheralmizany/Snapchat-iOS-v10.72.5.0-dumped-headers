//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPViperModuleOutput.h"

@class NSArray, NSError, UIScrollView;

@protocol SPPreviewsModuleOutput <SPViperModuleOutput>
- (void)spPreviewsModule:(id <SPPreviewsModuleInput>)arg1 encounteredError:(NSError *)arg2;
- (void)spPreviewsModule:(id <SPPreviewsModuleInput>)arg1 didTapOnScenarioAtIndex:(unsigned long long)arg2 inScenarios:(NSArray *)arg3;
- (void)spPreviewsModule:(id <SPPreviewsModuleInput>)arg1 didObtainScenarios:(NSArray *)arg2 withTags:(NSArray *)arg3;

@optional
- (void)spPreviewsModuleDidResetSelection:(id <SPPreviewsModuleInput>)arg1;
- (void)spPreviewsModule:(id <SPPreviewsModuleInput>)arg1 willStartPlayScenarioAtIndex:(unsigned long long)arg2;
- (void)spPreviewsModule:(id <SPPreviewsModuleInput>)arg1 didHideScenarioAtIndex:(unsigned long long)arg2;
- (void)spPreviewsModule:(id <SPPreviewsModuleInput>)arg1 willShowScenarioAtIndex:(unsigned long long)arg2;
- (void)spPreviewsModule:(id <SPPreviewsModuleInput>)arg1 didEndDragging:(UIScrollView *)arg2 willDecelerate:(_Bool)arg3;
- (void)spPreviewsModule:(id <SPPreviewsModuleInput>)arg1 didScroll:(UIScrollView *)arg2;
- (void)spPreviewsModule:(id <SPPreviewsModuleInput>)arg1 beginDragging:(UIScrollView *)arg2;
- (void)spPreviewsModule:(id <SPPreviewsModuleInput>)arg1 didDoubleTapOnScenarioAtIndex:(unsigned long long)arg2;
- (void)spPreviewsModule:(id <SPPreviewsModuleInput>)arg1 didLongTapOnScenarioAtIndex:(unsigned long long)arg2;
@end

