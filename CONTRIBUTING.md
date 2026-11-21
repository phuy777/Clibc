# Contributing to Clibc

Thank you for your interest in contributing to Clibc!

Clibc is an independent C standard library implementation. It is in an early,
experimental stage, so interfaces and internal implementation details may
change as the project develops.

## Ways to contribute

- Report bugs or unexpected behavior through GitHub Issues.
- Suggest new functions, improvements, or compatibility work.
- Submit fixes and implementation improvements through Pull Requests.
- Improve documentation and tests.

For substantial changes, opening an Issue first is recommended so the proposed
work can be discussed before implementation.

## Before submitting a change

Please make sure that:

1. The change has a clear purpose and stays focused.
2. Public declarations are placed in the appropriate standard-style header.
3. Function behavior is consistent with the relevant ISO C specification when
   the function is intended to implement a standard-library interface.
4. The implementation does not unnecessarily depend on functions that Clibc
   is intended to provide itself.
5. Relevant tests are added or updated where practical.
6. Existing code is not reformatted or changed without a reason related to the
   contribution.

Clibc does not yet have a fixed build system or a complete automated test
workflow. Until those are established, include the compiler and environment
used, the commands needed to reproduce your test, and the observed results in
your Pull Request.

## Code style

There is no fully formalized project-wide style guide yet. For now:

- Use clear, descriptive names consistent with the C standard library API.
- Keep functions focused and implementations straightforward.
- Use standard C types and headers where appropriate.
- Keep platform-specific code isolated where possible.
- Add comments when they explain non-obvious behavior or important constraints.

## Pull Requests

A useful Pull Request should:

- Describe what changed and why.
- Identify any relevant Issue.
- Explain how the change was tested.
- Mention known limitations or unimplemented edge cases.
- Update documentation when the user-visible behavior or project status changes.

By submitting a contribution, you agree that it will be distributed under the
project's MIT License.
