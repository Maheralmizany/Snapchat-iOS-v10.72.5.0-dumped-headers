//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView;

@protocol SCLensSubPickerControllerProtocol <NSObject>
@property(readonly, nonatomic) UIView *pickerContentView;
@property(readonly, nonatomic) NSString *selectedOptionId;
@property(readonly, nonatomic) long long selectedOptionIndex;
- (void)setOptionIdToRestore:(NSString *)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 view:(UIView *)arg2;
- (void)hideAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)showAnimated:(_Bool)arg1;
@end

