/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@class NSButton, NSView;

@interface Assistant : NSObject
{
    NSView *_parentView;
    NSButton *_backButton;
    NSButton *_forwardButton;
    NSButton *_cancelButton;
    NSButton *_helpButton;
    id <AssistantDelegate> _delegate;
}

- (id)initWithAssistentManager:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (void)goForward;
- (void)goBackward;
- (BOOL)shouldStop;
- (void)weAreDone;
- (id)windowTitle;
- (void)setupKeyViewLoop;

@end

