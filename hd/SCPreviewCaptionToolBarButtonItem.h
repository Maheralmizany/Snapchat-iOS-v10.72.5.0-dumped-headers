//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCPreviewToolBarButtonItem.h"

#import "SCPalettedColorPickerViewDelegate.h"

@class NSString, SCGrowingButton, SCPalettedColorPickerView, UIColor;

@interface SCPreviewCaptionToolBarButtonItem : SCPreviewToolBarButtonItem <SCPalettedColorPickerViewDelegate>
{
    UIColor *_color;
    SCGrowingButton *_styleButton;
    SCPalettedColorPickerView *_colorPicker;
    SCGrowingButton *_alignmentButton;
    id <SCPreviewCaptionToolBarButtonItemDelegate> _delegate;
}

@property(nonatomic) __weak id <SCPreviewCaptionToolBarButtonItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_alignmentPressed;
- (void)palettedColorPickerView:(id)arg1 didTogglePaletteToType:(unsigned long long)arg2 selectedColor:(id)arg3;
- (void)palettedColorPickerView:(id)arg1 didChangeColor:(id)arg2;
- (void)setAlignmentImage:(long long)arg1;
- (void)moveDropletToColor:(id)arg1;
- (void)setAlignmentButtonHidden:(_Bool)arg1;
- (void)setColorPickerHidden:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

