//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController<SCSpectaclesCustomExporting>;

@protocol SCSpectaclesCustomExportViewControllerDelegate <NSObject>
- (void)customExportViewControllerDidPressCancel:(UIViewController<SCSpectaclesCustomExporting> *)arg1;
- (void)customExportViewController:(UIViewController<SCSpectaclesCustomExporting> *)arg1 didSaveWithExportFormat:(long long)arg2 shouldMergeSnapsToSingleSnap:(_Bool)arg3 uploadToYouTube:(_Bool)arg4;
- (void)customExportViewController:(UIViewController<SCSpectaclesCustomExporting> *)arg1 didShareWithExportFormat:(long long)arg2 shouldMergeSnapsToSingleSnap:(_Bool)arg3 uploadToYouTube:(_Bool)arg4;
@end
