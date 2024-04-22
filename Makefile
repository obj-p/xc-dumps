## Contributing

.PHONY: brew
brew:
	@brew bundle --no-lock

.PHONY: pre-commit-install
pre-commit-install:
	@pre-commit install

## Development

.PHONY: xcodeproj
xcodeproj:
	@rm -rf mdump.xcodeproj
	@xcodegen
