//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSString, SCChatInputTextView, UIImage;

@protocol SCChatInputTextViewPasteDelegate
- (void)inputTextView:(SCChatInputTextView *)arg1 didPasteVideo:(NSData *)arg2 contentType:(NSString *)arg3;
- (void)inputTextView:(SCChatInputTextView *)arg1 didPasteGif:(NSData *)arg2;
- (void)inputTextView:(SCChatInputTextView *)arg1 didPasteMemoji:(UIImage *)arg2;
- (void)inputTextView:(SCChatInputTextView *)arg1 didPasteImage:(UIImage *)arg2;
@end

